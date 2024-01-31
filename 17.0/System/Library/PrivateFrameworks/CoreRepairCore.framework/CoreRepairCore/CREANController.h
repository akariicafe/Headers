@class NSData;

@interface CREANController : NSObject {
    NSData *apTicket;
}

- (void).cxx_destruct;
- (BOOL)isEANSupported;
- (BOOL)readFDRDataFromEANWithDataClass:(id)a0 outData:(id *)a1 stripPadding:(BOOL)a2;
- (id)_apticketCopyDataObjectPropertyWithTag:(unsigned long long)a0 property:(unsigned long long)a1;
- (id)_getDataClassesToWrite;
- (unsigned int)_getQuerykeyFromDataClass:(id)a0;
- (id)_ticketCopyHashDataWithNode:(unsigned int)a0;
- (BOOL)_writeDataToEAN:(id)a0 withKey:(id)a1;
- (id)apticketCopyHashData;
- (BOOL)calculateDerLength:(id)a0 actualSize:(unsigned long long *)a1;
- (id)copyCurrentFDREANValuesWithdataDir:(id)a0 error:(id *)a1;
- (BOOL)copyFDREANValues:(id)a0 outgenerationCount:(unsigned int *)a1 outManifesthash:(id *)a2;
- (id)copyStagedFDREanDataWithdataDir:(id)a0 error:(id *)a1;
- (BOOL)deleteFDRDataFromEANWithDataClass:(id)a0;
- (unsigned int)nextEANGenerationCount;
- (BOOL)setupVersionedFDRWithApTicket:(id)a0;
- (unsigned long long)sizeEAN:(id)a0;
- (BOOL)stageVersionedFDREANWithdataDir:(id)a0 error:(id *)a1;
- (BOOL)swapEAN:(id)a0 withKey:(id)a1;
- (BOOL)swapVersionedFDR;
- (BOOL)verifyFDRDataFromEANUsingCache:(BOOL)a0 cachedData:(id)a1;
- (BOOL)writeEAN:(id)a0 isImg4:(BOOL)a1;
- (BOOL)writeFDRDataToEANWithdataDir:(id)a0;

@end
