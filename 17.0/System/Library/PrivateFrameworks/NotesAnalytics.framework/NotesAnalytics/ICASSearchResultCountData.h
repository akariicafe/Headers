@class NSString, NSNumber;

@interface ICASSearchResultCountData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *topHitCount;
@property (readonly, nonatomic) NSNumber *notesCount;
@property (readonly, nonatomic) NSNumber *attachmentsCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTopHitCount:(id)a0 notesCount:(id)a1 attachmentsCount:(id)a2;

@end
