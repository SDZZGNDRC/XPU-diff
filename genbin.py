import lief
import sys

assert(len(sys.argv) >= 2)
binary = lief.parse(sys.argv[1])
segments = [i for i in binary.segments if i.type == lief.ELF.SEGMENT_TYPES.LOAD]

'''for i in segments:
    print(hex(i.virtual_address))
    print(i.virtual_address.to_bytes(8, byteorder = 'little'))
    print(hex(i.physical_size))
    print(i.physical_size.to_bytes(8, byteorder = 'little'))
'''

fout_name = 'bin.temp' if len(sys.argv) == 2 else sys.argv[2]
fout = open(fout_name, 'wb')

for i in segments:
    fout.write(i.virtual_address.to_bytes(8, byteorder = 'little'))
    fout.write(i.physical_size.to_bytes(8, byteorder = 'little'))
    fout.write(i.content.tobytes())
fout.close()
