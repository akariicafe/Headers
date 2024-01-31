@class NSArray, NSString;

@interface PFStoryConcreteAutoEditDecisionList : NSObject <PFStoryAutoEditDecisionList>

@property (readonly, copy, nonatomic) NSArray *clips;
@property (readonly, nonatomic) NSString *songAssetIdentifier;
@property (readonly, nonatomic) long long numberOfClips;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (void).cxx_destruct;
- (id)clipAtIndex:(long long)a0;
- (id)initWithSongAssetIdentifier:(id)a0 clips:(id)a1;
- (BOOL)isEqualToAutoEditDecisionList:(id)a0;

@end
