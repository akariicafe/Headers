@class NSString, NSSet;

@interface CHTitleQuery : CHQuery

@property (readonly, copy, nonatomic) NSString *transcribedTitle;
@property (readonly, copy, nonatomic) NSSet *titleStrokeIdentifiers;

- (id)debugName;
- (void).cxx_destruct;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;

@end
