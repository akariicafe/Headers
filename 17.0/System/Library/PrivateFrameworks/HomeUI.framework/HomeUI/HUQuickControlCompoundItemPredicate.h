@class NSArray, NSString;

@interface HUQuickControlCompoundItemPredicate : NSObject <HUQuickControlItemPredicate>

@property (readonly, copy, nonatomic) NSArray *requiredSubpredicates;
@property (readonly, copy, nonatomic) NSArray *optionalSubpredicates;
@property (readonly, nonatomic) unsigned long long minimumNumberOfMatchedPredicates;
@property (readonly, nonatomic) unsigned long long maximumNumberOfMatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)allSubpredicates;
- (id)initWithRequiredSubpredicates:(id)a0 optionalSubpredicates:(id)a1;
- (id)initWithRequiredSubpredicates:(id)a0 optionalSubpredicates:(id)a1 minimumNumberOfMatchedPredicates:(unsigned long long)a2;
- (id)matchingControlItemsForControlItems:(id)a0;

@end
