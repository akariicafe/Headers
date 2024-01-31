@class NSURL, NSString;

@interface MKPlaceActionDataProvider : NSObject <MKPlaceActionDataProviding>

@property (readonly, nonatomic) BOOL supportsMessagesForBusiness;
@property (readonly, nonatomic) BOOL supportsAddingPhotos;
@property (readonly, nonatomic) NSURL *messagesForBusinessURL;
@property (readonly, nonatomic) BOOL canShowCallAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
