@class NSNumber, NSString;

@interface EDAMNoteVersionId : FATObject

@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSNumber *updated;
@property (retain, nonatomic) NSNumber *saved;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *lastEditorId;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
