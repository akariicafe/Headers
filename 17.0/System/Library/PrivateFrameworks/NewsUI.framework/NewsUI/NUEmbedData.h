@class NSURL, NSString;

@interface NUEmbedData : SXJSONObject <SXEmbedType>

@property (readonly, nonatomic) double minimumWidth;
@property (readonly, nonatomic) double maximumWidth;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSString *enclosingHTML;
@property (readonly, nonatomic) NSString *bodyHTML;
@property (readonly, nonatomic) NSString *javaScript;
@property (readonly, nonatomic) unsigned long long autoPlayMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)autoPlayMediaWithValue:(id)a0 withType:(int)a1;

@end
