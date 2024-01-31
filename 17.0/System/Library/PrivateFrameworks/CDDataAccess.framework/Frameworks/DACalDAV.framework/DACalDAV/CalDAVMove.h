@class NSString;

@interface CalDAVMove : NSObject

@property (nonatomic) int sourceCalendarID;
@property (nonatomic) int itemID;
@property (retain, nonatomic) NSString *oldExternalID;
@property (nonatomic) int changeID;
@property (nonatomic) long long objectType;

- (void).cxx_destruct;
- (id)initWithSourceCalendarID:(int)a0 itemID:(int)a1 oldExternalID:(id)a2 changeID:(int)a3 objectType:(long long)a4;

@end
