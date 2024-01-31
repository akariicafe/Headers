@class GEOETATrafficUpdateResponse, GEOETATrafficUpdateErrorInfo, NSString;

@interface GEOETAReplyUpdateable : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEOETATrafficUpdateResponse *response;
@property (retain, nonatomic) GEOETATrafficUpdateErrorInfo *errorInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
