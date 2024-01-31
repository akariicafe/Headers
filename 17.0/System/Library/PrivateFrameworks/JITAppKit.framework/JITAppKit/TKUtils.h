@interface TKUtils : NSObject

+ (id)decompressData:(id)a0 algorithm:(int)a1;
+ (id)URL:(id)a0 withQueryParameters:(id)a1 addKeys:(id)a2 removeKeys:(id)a3 escape:(BOOL)a4;
+ (id)applicationLibraryPath;
+ (id)decompressData:(id)a0 algorithm:(int)a1 operation:(int)a2;
+ (BOOL)decompressFile:(id)a0 toDestinationPath:(id)a1 algorithm:(int)a2;
+ (id)hexForColor:(id)a0 withAlpha:(BOOL)a1;
+ (id)httpDataURLEncoded:(id)a0;
+ (id)uniqueKeyForURL:(id)a0;

@end
