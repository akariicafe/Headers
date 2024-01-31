@class NSData, NSString;

@interface GEOOfflineServiceReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) NSData *response;
@property (retain, nonatomic) NSData *responseMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
