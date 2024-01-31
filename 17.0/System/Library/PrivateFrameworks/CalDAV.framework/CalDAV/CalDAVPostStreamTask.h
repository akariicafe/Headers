@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask

@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *filename;

- (id)copyDefaultParserForContentType:(id)a0;
- (id)additionalHeaderValues;
- (id)requestBody;
- (id)responseData;
- (void).cxx_destruct;
- (id)requestBodyStream;
- (id)lossyAsciiFilename;
- (id)utf8PercentEscapedFilename;

@end
