@interface MFSearchFetchResponseQueue : MFFetchResponseQueue

- (id)init;
- (id)messageToSyncFlagsForUID:(unsigned int)a0;
- (BOOL)shouldAddUID:(unsigned int)a0;

@end
