@class NSNumber, EDAMNoteFilter;

@interface EDAMBusinessQuery : FATObject

@property (retain, nonatomic) EDAMNoteFilter *filter;
@property (retain, nonatomic) NSNumber *numExperts;
@property (retain, nonatomic) NSNumber *includeNotebooks;
@property (retain, nonatomic) NSNumber *includeNotesCounts;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
