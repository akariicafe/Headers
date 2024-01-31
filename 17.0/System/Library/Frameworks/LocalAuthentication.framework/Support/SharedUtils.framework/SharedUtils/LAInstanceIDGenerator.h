@class NSMutableDictionary;

@interface LAInstanceIDGenerator : NSObject {
    NSMutableDictionary *_currentIDs;
}

@property (class, readonly) LAInstanceIDGenerator *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)nextInstanceIDInDomain:(id)a0;

@end
