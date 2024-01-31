@class NSString;

@interface ITIdleTimeout : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)timeoutGeneratorUsingIdentifier:(unsigned long long)a0;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)initWithDuration:(double)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithDuration:(double)a0 identifier:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
