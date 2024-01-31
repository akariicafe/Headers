@class NSString, NSURL, NSMutableArray;

@interface StateData : NSObject

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSString *blockTitle;
@property (retain, nonatomic) NSString *conferenceTitle;
@property (retain, nonatomic) NSString *joinMethodTitle;
@property (retain, nonatomic) NSURL *joinMethodURL;
@property (nonatomic) BOOL joinMethodIsBroadcast;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } startRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } endRange;
@property (retain, nonatomic) NSMutableArray *joinMethods;
@property (retain, nonatomic) NSMutableArray *conferenceDetails;
@property (retain, nonatomic) NSMutableArray *ranges;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)resetToNewSection;

@end
