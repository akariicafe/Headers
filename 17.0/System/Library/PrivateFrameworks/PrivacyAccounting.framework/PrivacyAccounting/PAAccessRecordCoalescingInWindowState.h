@class NSString, NSMutableDictionary;

@interface PAAccessRecordCoalescingInWindowState : NSObject <PAAccessRecordCoalescingWindowState>

@property (readonly, nonatomic) long long epoch;
@property (readonly, nonatomic) NSMutableDictionary *groupedRecordsByMatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
