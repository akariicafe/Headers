@class EMMessage, NSString, EFCancelationToken, EFObservable, EFFuture, NSObject;
@protocol OS_os_log, EMCollectionItemID, EFObserver, EMContentItemRequestDelegate;

@interface MessageContentRepresentationRequest : NSObject <EFCancelable, EFSignpostable, EFLoggable, EFPubliclyDescribable> {
    id<EMContentItemRequestDelegate> _delegate;
    EFCancelationToken *_cancelationToken;
    EFObservable<EFObserver> *_inputObservable;
    EFObservable *_contentObservable;
    EFFuture *_futureContentRepresentation;
    _Atomic BOOL _hasError;
    unsigned long long _retyAttempt;
    BOOL _includeSuggestionItems;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contentRepresentationLock;
    NSString *_contentRepresentationType;
}

@property (class, readonly) NSObject<OS_os_log> *signpostLog;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EMMessage *message;
@property (readonly, nonatomic) id<EMCollectionItemID> itemID;
@property (readonly, nonatomic) EFFuture *messageFuture;
@property (readonly, nonatomic) EFFuture *contentRepresentationFuture;
@property (readonly) BOOL hasStarted;
@property (readonly) BOOL isFinished;
@property (readonly) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

- (id)resultIfAvailable;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (void)cancel;
- (void)retry;
- (id)waitForResult;
- (id)addLoadObserver:(id /* block */)a0;
- (id)onScheduler:(id)a0 addLoadObserver:(id /* block */)a1;
- (id)initWithMessage:(id)a0 includeSuggestions:(long long)a1 representationType:(id)a2 delegate:(id)a3;
- (id)initWithMessage:(id)a0 includeSuggestions:(long long)a1;
- (id)initWithMessageList:(id)a0 itemIdentifier:(id)a1 includeSuggestions:(long long)a2;
- (id)initWithMessageList:(id)a0 itemIdentifier:(id)a1 includeSuggestions:(long long)a2 representationType:(id)a3 delegate:(id)a4;
- (void)updateItemID:(id)a0 messageList:(id)a1;

@end
