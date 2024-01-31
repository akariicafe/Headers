@class NSNumber, NSArray;

@interface EDAMNoteList : FATObject

@property (retain, nonatomic) NSNumber *startIndex;
@property (retain, nonatomic) NSNumber *totalNotes;
@property (retain, nonatomic) NSArray *notes;
@property (retain, nonatomic) NSArray *stoppedWords;
@property (retain, nonatomic) NSArray *searchedWords;
@property (retain, nonatomic) NSNumber *updateCount;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
