/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUZipArchive, NSMutableDictionary;



@interface OCPZipPackage : OCPPackage 
{
    SFUZipArchive *mArchive;
    NSMutableDictionary *mParts;
}


- (id)initWithArchive:(id)arg1;
- (void)resetPartForLocation:(id)arg1;
- (id)partForLocation:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end