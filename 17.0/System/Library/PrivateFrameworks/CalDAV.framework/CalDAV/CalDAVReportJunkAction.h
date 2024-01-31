@class NSURL;

@interface CalDAVReportJunkAction : NSObject <CoreDAVChangeContextHolding>

@property (readonly, nonatomic) NSURL *resourceURL;
@property (retain, nonatomic) id changeContext;

- (void).cxx_destruct;
- (id)initWithResourceURL:(id)a0;

@end
