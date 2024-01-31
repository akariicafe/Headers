@class FCReadingHistory, NSString;

@interface FCFeedTransformationUnreadOnly : NSObject <FCFeedTransforming>

@property (retain, nonatomic) FCReadingHistory *history;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithReadingHistory:(id)a0;

- (id)transformFeedItems:(id)a0;
- (void).cxx_destruct;

@end
