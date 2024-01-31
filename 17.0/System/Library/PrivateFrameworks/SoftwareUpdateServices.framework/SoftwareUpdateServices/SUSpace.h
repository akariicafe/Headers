@interface SUSpace : NSObject

+ (unsigned long long)currentFreeSpaceForVolume:(id)a0;
+ (id)hasSufficientSpaceWithOptions:(id)a0 error:(id *)a1;
+ (void)hasSufficientSpaceWithOptions:(id)a0 withCompletion:(id /* block */)a1;
+ (void)makeRoomForUpdate:(id)a0 completion:(id /* block */)a1;
+ (BOOL)makeRoomForUpdate:(id)a0 error:(id *)a1;

@end
