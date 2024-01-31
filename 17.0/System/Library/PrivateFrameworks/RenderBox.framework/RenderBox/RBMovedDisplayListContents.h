@class NSString;

@interface RBMovedDisplayListContents : NSObject <_RBDisplayListContents> {
    struct refcounted_ptr<RB::DisplayList::Contents> { struct Contents *_p; } _contents;
    struct unique_ptr<RB::XML::Document, std::default_delete<RB::XML::Document>> { struct __compressed_pair<RB::XML::Document *, std::default_delete<RB::XML::Document>> { struct Document *__value_; } __ptr_; } _xml_document;
}

@property (readonly, nonatomic) const void *_rb_contents;
@property (readonly, nonatomic) const void *_rb_xml_document;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (readonly, copy, nonatomic) NSString *xmlDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodedObjectWithData:(id)a0 delegate:(id)a1 error:(id *)a2;

- (void)renderInContext:(struct CGContext { } *)a0 options:(id)a1;
- (void)_drawInState:(struct _RBDrawingState { } *)a0 alpha:(float)a1;
- (id)encodedDataForDelegate:(id)a0 error:(id *)a1;
- (void)drawInState:(struct _RBDrawingState { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
