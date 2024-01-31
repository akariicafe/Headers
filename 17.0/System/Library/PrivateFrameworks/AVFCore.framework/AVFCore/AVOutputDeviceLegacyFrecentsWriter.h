@class NSString, NSMutableDictionary, NSMutableArray;

@interface AVOutputDeviceLegacyFrecentsWriter : NSObject <AVOutputDeviceFrecentsWriting> {
    NSMutableDictionary *_updatedFrecentsList;
    NSMutableArray *_keysToRemove;
}

@property (readonly, nonatomic) long long numberOfKeysToBeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFrecentsWriter;

- (id)init;
- (void)dealloc;
- (BOOL)persistToDiskReturningError:(id *)a0;
- (void)removeFrecencyInfoForDeviceID:(id)a0;
- (void)setFrecencyInfo:(id)a0 forDeviceID:(id)a1;

@end
