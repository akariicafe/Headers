@class NSArray, NSString;

@interface SBSAImpactFeedbackAction : NSObject <SBSAActionRepresenting>

@property (readonly, nonatomic) long long impactFeedbackStyle;
@property (readonly, nonatomic) BOOL prepareOnly;
@property (readonly, copy, nonatomic) NSArray *reasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImpactFeedbackStyle:(long long)a0 prepareOnly:(BOOL)a1 reasons:(id)a2;

@end
