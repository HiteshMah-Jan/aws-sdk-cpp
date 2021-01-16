﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/BucketLocationConstraint.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>The configuration information for the bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CreateBucketConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API CreateBucketConfiguration
  {
  public:
    CreateBucketConfiguration();
    CreateBucketConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    CreateBucketConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies the Region where the bucket will be created. If you don't specify a
     * Region, the bucket is created in the US East (N. Virginia) Region
     * (us-east-1).</p>
     */
    inline const BucketLocationConstraint& GetLocationConstraint() const{ return m_locationConstraint; }

    /**
     * <p>Specifies the Region where the bucket will be created. If you don't specify a
     * Region, the bucket is created in the US East (N. Virginia) Region
     * (us-east-1).</p>
     */
    inline bool LocationConstraintHasBeenSet() const { return m_locationConstraintHasBeenSet; }

    /**
     * <p>Specifies the Region where the bucket will be created. If you don't specify a
     * Region, the bucket is created in the US East (N. Virginia) Region
     * (us-east-1).</p>
     */
    inline void SetLocationConstraint(const BucketLocationConstraint& value) { m_locationConstraintHasBeenSet = true; m_locationConstraint = value; }

    /**
     * <p>Specifies the Region where the bucket will be created. If you don't specify a
     * Region, the bucket is created in the US East (N. Virginia) Region
     * (us-east-1).</p>
     */
    inline void SetLocationConstraint(BucketLocationConstraint&& value) { m_locationConstraintHasBeenSet = true; m_locationConstraint = std::move(value); }

    /**
     * <p>Specifies the Region where the bucket will be created. If you don't specify a
     * Region, the bucket is created in the US East (N. Virginia) Region
     * (us-east-1).</p>
     */
    inline CreateBucketConfiguration& WithLocationConstraint(const BucketLocationConstraint& value) { SetLocationConstraint(value); return *this;}

    /**
     * <p>Specifies the Region where the bucket will be created. If you don't specify a
     * Region, the bucket is created in the US East (N. Virginia) Region
     * (us-east-1).</p>
     */
    inline CreateBucketConfiguration& WithLocationConstraint(BucketLocationConstraint&& value) { SetLocationConstraint(std::move(value)); return *this;}

  private:

    BucketLocationConstraint m_locationConstraint;
    bool m_locationConstraintHasBeenSet;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
