@class NSString, HDHRSOriginInformation, NSData, NSDate, NSNumber;

@interface HDOriginalFHIRResourceObject : HDFHIRResourceObject {
    NSData *_staticUniquenessChecksum;
}

@property (readonly, copy, nonatomic) NSDate *firstSeenDate;
@property (readonly, copy, nonatomic) HDHRSOriginInformation *originInformation;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy, nonatomic) NSNumber *existingRowID;
@property (readonly, nonatomic) BOOL ingestedOnLocalDevice;

+ (BOOL)supportsSecureCoding;
+ (id)resourceObjectWithData:(id)a0 uniquenessChecksum:(id)a1 sourceURL:(id)a2 FHIRVersion:(id)a3 receivedDate:(id)a4 firstSeenDate:(id)a5 extractionHints:(unsigned long long)a6 originVersion:(struct { long long x0; long long x1; long long x2; })a7 originBuild:(id)a8 country:(id)a9 existingROWID:(id)a10 ingestedOnLocalDevice:(BOOL)a11 error:(id *)a12;
+ (id)resourceObjectWithStaticIdentifier:(id)a0 data:(id)a1 sourceURL:(id)a2 FHIRVersion:(id)a3 receivedDate:(id)a4 firstSeenDate:(id)a5 extractionHints:(unsigned long long)a6 originVersion:(struct { long long x0; long long x1; long long x2; })a7 originBuild:(id)a8 country:(id)a9 error:(id *)a10;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniquenessChecksum;
- (id)_initWithResourceIdentifier:(id)a0 JSONObject:(id)a1 uniquenessChecksum:(id)a2 sourceURL:(id)a3 FHIRVersion:(id)a4 receivedDate:(id)a5 firstSeenDate:(id)a6 extractionHints:(unsigned long long)a7 originInformation:(id)a8 existingROWID:(id)a9 ingestedOnLocalDevice:(BOOL)a10 country:(id)a11;
- (id)copyWithAlteredData:(id)a0 error:(id *)a1;
- (id)initWithResourceData:(id)a0 receivedDate:(id)a1 firstSeenDate:(id)a2 extractionHints:(unsigned long long)a3 originInformation:(id)a4 country:(id)a5 existingROWID:(id)a6 ingestedOnLocalDevice:(BOOL)a7 error:(id *)a8;

@end
