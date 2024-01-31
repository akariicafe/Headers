@interface GEOFilePathsPrivate : NSObject

+ (id)pathForSearchPath:(int)a0 andDomain:(int)a1;
+ (id)daemonContainerLibraryPathUsingLibSystem;
+ (id)systemContainerLibraryPathUsingLibSystem;
+ (id)daemonContainerPathUsingLibSystem;
+ (id)userContainerCachesPathUsingLibSystem;
+ (id)systemContainerPathUsingLibSystem;
+ (id)daemonContainerCachesPathUsingLibSystem;
+ (id)userContainerLibPathUsingLibSystem;
+ (id)systemContainerCachesPathUsingLibSystem;

@end
