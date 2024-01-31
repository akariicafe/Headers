@class NSString, NSMutableDictionary;

@interface AVOutputDeviceFrecentsWriter : NSObject <AVOutputDeviceFrecentsWriting> {
    NSString *_frecentsFilePath;
    NSMutableDictionary *_frecents;
}

@property (readonly, nonatomic) long long numberOfKeysToBeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithFrecentsFilePath:(id)a0;
- (BOOL)persistToDiskReturningError:(id *)a0;
- (void)removeFrecencyInfoForDeviceID:(id)a0;
- (void)setFrecencyInfo:(id)a0 forDeviceID:(id)a1;

@end
