@class NSArray;

@interface AAInviteCompletionInfo : NSObject

@property (nonatomic) unsigned long long transportType;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic) unsigned long long status;

- (void).cxx_destruct;

@end
