@class NSString, NSArray;

@interface ICASNoteSelectionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSArray *noteIDs;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithNoteIDs:(id)a0;

@end
