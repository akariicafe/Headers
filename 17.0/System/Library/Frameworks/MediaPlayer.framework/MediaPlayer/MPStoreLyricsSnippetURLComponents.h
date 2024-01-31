@class NSString;

@interface MPStoreLyricsSnippetURLComponents : NSObject

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) long long songAdamID;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *signature;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)URLWithAdditionalParameters:(id)a0 completion:(id /* block */)a1;
- (id)initWithSong:(id)a0 language:(id)a1 startTime:(double)a2 endTime:(double)a3;
- (id)signatureWithCountryCode:(id)a0 adamID:(id)a1 startTime:(id)a2 endTime:(id)a3 language:(id)a4;

@end
