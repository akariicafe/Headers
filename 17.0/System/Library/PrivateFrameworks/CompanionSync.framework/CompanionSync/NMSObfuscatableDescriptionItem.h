@class NSString;
@protocol NSObject;

@interface NMSObfuscatableDescriptionItem : NSObject

@property (retain, nonatomic) NSString *prefix;
@property (retain, nonatomic) id<NSObject> value;
@property (nonatomic) BOOL obfuscated;

- (void).cxx_destruct;
- (id)initWithPrefix:(id)a0 value:(id)a1 obfuscated:(BOOL)a2;

@end
