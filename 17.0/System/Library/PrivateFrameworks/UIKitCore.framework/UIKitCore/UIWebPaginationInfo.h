@class NSObject, NSArray, UIWebDocumentView;
@protocol WebDocumentView;

@interface UIWebPaginationInfo : NSObject {
    NSObject<WebDocumentView> *_documentView;
    double _scaleFactor;
    struct CGSize { double width; double height; } _layoutSize;
    NSArray *_pageRects;
}

@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, nonatomic) double lastPageHeight;
@property (retain, nonatomic) UIWebDocumentView *webDocumentView;

- (struct CGSize { double x0; double x1; })layoutSize;
- (double)scaleFactor;
- (void)dealloc;
- (void).cxx_destruct;
- (id)documentView;
- (id)initWithDocumentView:(id)a0 scaleFactor:(double)a1 layoutSize:(struct CGSize { double x0; double x1; })a2 pageRects:(id)a3;
- (id)pageRects;
- (struct CGSize { double x0; double x1; })sizeForPageAtIndex:(long long)a0;

@end
