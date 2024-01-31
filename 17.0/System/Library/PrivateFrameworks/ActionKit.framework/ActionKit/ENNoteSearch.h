@class NSString;

@interface ENNoteSearch : NSObject

@property (retain, nonatomic) NSString *searchString;

+ (id)noteSearchCreatedByThisApplication;
+ (id)noteSearchWithSearchString:(id)a0;

- (id)init;
- (id)initWithSearchString:(id)a0;
- (void).cxx_destruct;

@end
