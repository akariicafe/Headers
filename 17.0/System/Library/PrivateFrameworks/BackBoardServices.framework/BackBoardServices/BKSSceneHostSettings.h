@class NSString;

@interface BKSSceneHostSettings : NSObject <BSDescriptionStreamable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long touchBehavior;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 touchBehavior:(long long)a1;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
