@class NSString, SUUIClientContext;

@interface SUUIErrorDocumentViewController : SUUIViewController <SUUIDocumentViewController> {
    SUUIClientContext *_clientContext;
    unsigned long long _contentUnavailableStyle;
}

@property (copy, nonatomic) id /* block */ retryActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
