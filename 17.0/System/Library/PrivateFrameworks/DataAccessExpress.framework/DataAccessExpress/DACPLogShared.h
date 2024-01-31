@class NSMutableDictionary;

@interface DACPLogShared : NSObject {
    NSMutableDictionary *_UUIDToFileMap;
}

@property (class, readonly) DACPLogShared *shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_array:(id)a0 beginsWithArray:(id)a1 outRemainingArray:(id *)a2;
- (id)_getUUIDForFolder:(id)a0 baseName:(id)a1;
- (BOOL)_logData:(id)a0 UUID:(id)a1 startNewFile:(BOOL)a2 sizeCheck:(long long)a3 wantsCompressed:(BOOL)a4 maxFileCount:(long long)a5 outDidCreateNewFile:(BOOL *)a6 outNewFilePath:(id *)a7;
- (BOOL)_slurpToFileUUID:(id)a0 slurpeeFileDescriptor:(int)a1 prefix:(id)a2 suffix:(id)a3 startNewFile:(BOOL)a4 sizeCheck:(long long)a5 wantsCompressed:(BOOL)a6 maxLogFileCount:(int)a7 outDidCreateNewFile:(BOOL *)a8 outNewFilePath:(id *)a9;

@end
