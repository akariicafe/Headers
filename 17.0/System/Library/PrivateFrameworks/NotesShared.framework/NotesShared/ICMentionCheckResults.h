@class NSSet, NSString;

@interface ICMentionCheckResults : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeOfMention;
@property (nonatomic) BOOL isPartialMention;
@property (nonatomic) BOOL isExplicitMention;
@property (nonatomic) BOOL isAllMention;
@property (copy, nonatomic) NSSet *matchingParticipants;
@property (copy, nonatomic) NSString *mentionString;

- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;

@end
