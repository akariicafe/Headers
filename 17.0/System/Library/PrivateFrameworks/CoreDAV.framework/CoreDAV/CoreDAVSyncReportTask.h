@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask

@property (readonly, nonatomic) NSString *previousSyncToken;
@property (readonly, nonatomic) NSString *nextSyncToken;
@property (readonly, nonatomic) BOOL moreToSync;
@property (readonly, nonatomic) BOOL wasInvalidSyncToken;

- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)requestBody;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1 withDepth:(int)a2 previousSyncToken:(id)a3;
- (id)description;
- (id)notFoundHREFs;
- (void).cxx_destruct;
- (BOOL)hadUnexpectedChangeOfSyncTokenWithZeroResponses;
- (id)httpMethod;

@end
