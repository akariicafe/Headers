@interface SAUtilities : NSObject

+ (id)createCommaSeparatedString:(id)a0;
+ (void)getFileSize:(id)a0 reply:(id /* block */)a1;
+ (int)killSADaemon;
+ (int)loadSADaemon;
+ (id)splitArray:(id)a0 into:(int)a1;

@end
