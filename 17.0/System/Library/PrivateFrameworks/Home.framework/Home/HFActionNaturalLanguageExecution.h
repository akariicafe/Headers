@class NSSet, HFActionNaturalLanguageOptions, NSMutableSet;
@protocol HFAccessoryRepresentable;

@interface HFActionNaturalLanguageExecution : NSObject

@property (retain, nonatomic) HFActionNaturalLanguageOptions *options;
@property (retain, nonatomic) NSSet *actions;
@property (retain, nonatomic) NSSet *allInvolvedObjects;
@property (retain, nonatomic) NSSet *involvedServices;
@property (readonly, nonatomic) unsigned long long accessoryCount;
@property (nonatomic) BOOL named;
@property (readonly, nonatomic) NSMutableSet *indescribableActionTypes;
@property (readonly, nonatomic) id<HFAccessoryRepresentable> singularInvolvedObject;

+ (id)_accessoryRepresentingIDsInSet:(id)a0;
+ (id)executionWithActions:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)updateInvolvedObjects;

@end
