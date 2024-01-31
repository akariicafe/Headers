@class NSString;

@interface ICASViewRefData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *linkedNoteId;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithLinkedNoteId:(id)a0;

@end
