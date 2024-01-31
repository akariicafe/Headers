@class GEOPDPlaceResponse, NSString;

@interface GEOPlaceByPhoneNumberReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEOPDPlaceResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
