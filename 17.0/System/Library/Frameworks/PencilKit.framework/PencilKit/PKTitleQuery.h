@class CHTitleQuery, PKDrawing, NSString;
@protocol PKTitleQueryDelegate;

@interface PKTitleQuery : NSObject <CHQueryDelegate>

@property (retain, nonatomic) CHTitleQuery *titleQuery;
@property (retain, nonatomic) PKDrawing *drawing;
@property (weak, nonatomic) id<PKTitleQueryDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *transcribedTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (id)initWithDrawing:(id)a0;
- (void)queryDidUpdateResult:(id)a0;

@end
