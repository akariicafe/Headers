@class NSString, WMFPlayer;

@interface WMFReader : NSObject <MFReader> {
    int m_recordsRead;
    WMFPlayer *m_player;
    unsigned int m_length;
    const char *m_pBuffer;
    unsigned int m_cursor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)play:(id)a0;
- (void).cxx_destruct;
- (int)moveDataCursor:(unsigned int)a0;
- (int)checkBytesAvailable:(unsigned int)a0;
- (id)initWithWMFPlayer:(id)a0;
- (int)playHeaders;
- (int)playRecord;

@end
