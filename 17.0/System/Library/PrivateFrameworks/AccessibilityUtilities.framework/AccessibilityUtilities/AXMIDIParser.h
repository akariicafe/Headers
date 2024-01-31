@interface AXMIDIParser : NSObject

- (unsigned short)_channelForStatusByte:(unsigned char)a0;
- (long long)_eventTypeForStatusByte:(unsigned char)a0;
- (unsigned long long)_expectedPacketLengthForEventType:(long long)a0;
- (id)parse:(const struct MIDIPacketList { unsigned int x0; struct MIDIPacket { unsigned long long x0; unsigned short x1; unsigned char x2[256]; } x1[1]; } *)a0 error:(id *)a1;

@end
