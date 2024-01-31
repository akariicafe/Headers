@class RTIDocumentTraits, RTIDocumentState, RTISessionOptions;

@interface RTIInputSystemClientSession : NSObject

@property (retain, nonatomic) RTISessionOptions *beginOptions;
@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (retain, nonatomic) RTIDocumentState *documentState;

- (void).cxx_destruct;

@end
