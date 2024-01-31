@class NSString;
@protocol EMCollectionItemIDStateCapturerDelegate;

@interface EMCollectionItemIDStateCapturer : EFListStateCapturer <EFListStateCapturerDelegate>

@property (readonly, weak, nonatomic) id<EMCollectionItemIDStateCapturerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemsForStateCaptureWithErrorString:(id *)a0;
- (id)labelForStateCapture;
- (id)descriptionForItem:(id)a0;
- (id)initWithTitle:(id)a0 delegate:(id)a1;

@end
