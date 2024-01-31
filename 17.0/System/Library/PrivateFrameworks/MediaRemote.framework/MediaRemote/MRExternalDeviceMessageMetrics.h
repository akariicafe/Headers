@class NSString, NSMutableDictionary;

@interface MRExternalDeviceMessageMetrics : NSObject {
    NSString *_path;
    NSMutableDictionary *_entries;
}

- (void)write;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addMessage:(id)a0 data:(id)a1;

@end
