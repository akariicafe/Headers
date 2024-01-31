@class BSMutableSettings;

@interface _SWBSActionResponseSettings : NSObject

@property (retain, nonatomic) BSMutableSettings *mutableSettings;

- (id)init;
- (void)setObject:(id)a0 forSetting:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setFlag:(BOOL)a0 forSetting:(unsigned long long)a1;
- (id)bsSettings;

@end
